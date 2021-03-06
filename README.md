# OpenGL ES

![Platform](https://img.shields.io/badge/Platform-macOS-brightgreen)

OpenGL ES를 이용해서 3D 모델을 렌더링 하는 방법, 물체를 바라보는 시점을 동적으로 변환하는 방법, 쉐이딩이나 조명, 텍스처 효과를 사용하는 방법 등과 같은 기본적인 컴퓨터 그래픽스 관련 테크닉을
설명합니다.

## 전제조건

프로젝트를 빌드하고 실행시키기 위해선 아래 프로그램들이 반드시 설치되어 있어야 합니다.

+ [Git](https://git-scm.com/downloads)
+ [CMake](https://cmake.org/download)
+ [Vcpkg](https://github.com/microsoft/vcpkg)

## 빌드

프로젝트에서 아래 라이브러리들을 사용하며 Vcpkg를 이용해서 라이브러리들을 설치합니다.

+ [spdlog](https://github.com/gabime/spdlog)
+ [glm](https://github.com/g-truc/glm)
+ [sdl2](https://github.com/libsdl-org/SDL)
+ [catch2](https://github.com/catchorg/Catch2)

```
vcpkg install spdlog glm sdl2 catch2
```

프로젝트는 CMake를 이용해서 생성합니다.

```
cmake -B [build directory] -S . -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
cmake --build [build directory]
```

## 목차

### 01. 오리엔테이션

+ [동영상](https://youtu.be/5ltQAmyo6Mo)
+ [슬라이드](https://docs.google.com/presentation/d/18XgdDWOH9SFFyHMuTS2kuhDO379Wo0qtpKugqk8h9jw/edit?usp=sharing)

### 02. 컴퓨터 그래픽스

+ [동영상](https://youtu.be/aq7UXbus7NY)
+ [슬라이드](https://docs.google.com/presentation/d/1-bCNUH0e6j4QF70cVQGsblL6h6T5sOLJ5by-h3unJxE/edit?usp=sharing)

### 03. 프로젝트 셋업

+ [동영상](https://youtu.be/zLjvoZEYcew)
+ [슬라이드](https://docs.google.com/presentation/d/1r0VwI4tPbyFKDmpEj_NDT8QYkK9F9qFtRODPaod7RIg/edit?usp=sharing)

### 04. EGL 초기화 및 종료

+ [동영상](https://youtu.be/mMIePH5AInI)
+ [슬라이드](https://docs.google.com/presentation/d/1_wH_11cCXuj_5nGiB_4HMLoXQYgn2OCe7qx9IcIdHsc/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/04.InitializeAndTerminateEGL)

### 05. EGLConfig 선택

+ [동영상](https://youtu.be/mQx_7W0pXqU)
+ [슬라이드](https://docs.google.com/presentation/d/1pww4_xDNyYiSIlCFKY1wakQ9Fl6Zojar0gGaP3OufQE/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/05.ChooseEGLConfig)

### 06. EGLContext 생성 및 파괴

+ [동영상](https://youtu.be/RIkW-LrTpCA)
+ [슬라이드](https://docs.google.com/presentation/d/1wC8OPmVXykqhSSzcQHYzn0rxMtqjCM2RW36Foa6zI7A/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/06.CreateAndDestroyEGLContext)

### 07. EGLSurface 생성 및 파괴

+ [동영상](https://youtu.be/zei42ZknbNQ)
+ [슬라이드](https://docs.google.com/presentation/d/1jsxYPOqg379006023EbhhsIDvloi7D3GABfndRJ61Co/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/07.CreateAndDestroyEGLSurface)

### 08. Current EGL 만들기

+ [동영상](https://youtu.be/iXEVOfjE4vo)
+ [슬라이드](https://docs.google.com/presentation/d/1BRRIDxZluug28msn3i7g6o9W2IHD0YarH5PFG184_No/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/08.MakeCurrentEGL)

### 09. 그래픽스 파이프라인

+ [동영상](https://youtu.be/phzqJImcPDM)
+ [슬라이드](https://docs.google.com/presentation/d/17291LzoFqTE9boKv9XV47zFM5ZjTnGYdm2YzetbMqVY/edit?usp=sharing)

### 10. Shader 생성 및 파괴

+ [동영상](https://youtu.be/oz4dCYZSwjA)
+ [슬라이드](https://docs.google.com/presentation/d/1U29vG6KALEmhtN71JCHLcLDLUORcxYY_eEfbid_Q2Sk/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/10.CreateAndDestroyShader)

### 11. Program 생성 및 파괴

+ [동영상](https://youtu.be/mhncEqMN4lk)
+ [슬라이드](https://docs.google.com/presentation/d/17IC4-6O_wIXW2reGQbF0S1fBIwvWR9_VoJCoRlcZW7w/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/11.CreateAndDestroyProgram)

### 12. 스테이트 머신

+ [동영상](https://youtu.be/natFFEMq0YY)
+ [슬라이드](https://docs.google.com/presentation/d/1XYsW_vaOUFOygMmxf1DIpS7ZTx097UeC7tk9uXf2CWs/edit?usp=sharing)

### 13. Buffer 배우기

+ [동영상](https://youtu.be/MewWN0lpEXs)
+ [슬라이드](https://docs.google.com/presentation/d/1l-fUm7zxqnaawEQf-pOkcJAhi18UeFQxVrcDfzxuLiE/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/13.LearnBuffer)

### 14. Attribute 설정

+ [동영상](https://youtu.be/9xBHtUP3xN0)
+ [슬라이드](https://docs.google.com/presentation/d/1lPrFZYUg-MMU8fiAs7OZ3YO2bz7fUHak3h38Ct6NAeA/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/14.SetAttribute)

### 15. Element 배우기

+ [동영상](https://youtu.be/qGKvG_Rj_oE)
+ [슬라이드](https://docs.google.com/presentation/d/1ApbFRZsN8oX-G8rO0nhP3eeljXV88QBHTiyVXs0Ft1w/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/15.LearnElement)

### 16. Vertex Array 배우기

+ [동영상](https://youtu.be/woBMb3_KsPs)
+ [슬라이드](https://docs.google.com/presentation/d/1faK6tmz2Pt62HwA7mDwsa-I-_DvdRYVoJA5P8MDl18E/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/16.LearnVertexArray)

### 17. Texture 배우기

+ [동영상](https://youtu.be/cqFGJ00UptI)
+ [슬라이드](https://docs.google.com/presentation/d/1MpsVuryMBG7CglXZJwAgAaiQwAwGMejl28V-tN67rkM/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/17.LearnTexture)

### 18. 좌표계

+ [동영상](https://youtu.be/utQSw-JyVIM)
+ [슬라이드](https://docs.google.com/presentation/d/1v8XIAp8Nkyr_RteSg2g97cvN1_DcKZ4JqQWGgYVXrjU/edit?usp=sharing)
+ [코드](https://github.com/GraphicsKorea/OpenGLES/tree/main/18.CoordinateSystem)
