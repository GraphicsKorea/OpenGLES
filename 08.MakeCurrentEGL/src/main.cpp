//
// Created by Daemyung Jang on 2021/09/20.
//

#include <vector>
#include <spdlog/spdlog.h>
#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <Base/Window.h>
#include <Base/utility.h>

struct App {
    EGLDisplay display{EGL_NO_DISPLAY};
    EGLConfig config{nullptr};
    EGLContext context{EGL_NO_CONTEXT};
    EGLSurface surface{EGL_NO_SURFACE};
};

int main([[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
    App app{};
    Window window{{.title = "Current EGL 만들기", .size = {1280, 720}}};

    window.run([&app, &window] {
                   app.display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
                   if (app.display == EGL_NO_DISPLAY) {
                       spdlog::error("기본 디스플레이로부터 EGLDisplay를 얻을 수 없습니다.");
                       std::terminate();
                   }

                   EGL_TEST(eglInitialize(app.display, nullptr, nullptr));
                   EGL_TEST(eglBindAPI(EGL_OPENGL_ES_API));

                   EGLint config_attributes[] = {
                           EGL_RED_SIZE, 8,
                           EGL_GREEN_SIZE, 8,
                           EGL_BLUE_SIZE, 8,
                           EGL_ALPHA_SIZE, 8,
                           EGL_DEPTH_SIZE, 16,
                           EGL_STENCIL_SIZE, 8,
                           EGL_NONE
                   };
                   EGLint num_config;
                   EGL_TEST(eglChooseConfig(app.display, config_attributes, &app.config, 1, &num_config));

                   EGLint context_attributes[] = {
                           EGL_CONTEXT_MAJOR_VERSION, 3,
                           EGL_NONE
                   };
                   app.context = eglCreateContext(app.display, app.config, EGL_NO_CONTEXT, context_attributes);
                   if (app.context == EGL_NO_CONTEXT) {
                       spdlog::error("EGLContext를 생성할 수 없습니다.");
                       std::terminate();
                   }

                   app.surface = eglCreateWindowSurface(app.display, app.config, Window::native_window(window), nullptr);
                   if (app.surface == EGL_NO_SURFACE) {
                       spdlog::error("EGLSurface를 생성할 수 없습니다.");
                       std::terminate();
                   }

                   EGL_TEST(eglMakeCurrent(app.display, app.surface, app.surface, app.context));
               },
               [] {},
               [&app] {
                   GL_TEST(glClearColor(1.0f, 0.0f, 1.0f, 1.0f));
                   GL_TEST(glClear(GL_COLOR_BUFFER_BIT));

                   EGL_TEST(eglSwapBuffers(app.display, app.surface));
               },
               [&app] {
                   EGL_TEST(eglDestroySurface(app.display, app.surface));
                   app.surface = EGL_NO_SURFACE;

                   EGL_TEST(eglDestroyContext(app.display, app.context));
                   app.context = EGL_NO_CONTEXT;

                   if (!eglTerminate(app.display)) {
                       spdlog::error("EGL을 종료를 실패하였습니다.");
                       std::terminate();
                   }
                   app.display = EGL_NO_DISPLAY;
               });

    return 0;
}
