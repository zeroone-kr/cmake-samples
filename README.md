# cmake_samples
개인 학습용
<div>
<img widht="200" src="https://cgold.readthedocs.io/en/latest/_images/generate-native-files.png">
</div>

## 추가 메모
- FetchContent: C++에서 외부 라이브러리를 불러오거나 설치하는 것이 언어상에서 제공하는 기능이 없어 불편하나 ```FetchContent```를 사용하면 외부 라이브러리르 쉽게 불러와서 설치할 수 있다.
- make 이외의 빌드 시스템 사용하기: CMake에서는 디폴트로 make를 사용하나 다른 빌드 프로그램(unix makefiles, ninja, visual studio 16 2019 등) 선택가능하다.
- 다른 빌드 시스템 사용하는 것은 다음 처럼 설정할 수 있다.
```
cmake .. -DCMAKE_GENERATOR=Ninja
```

## 참고 자료
- https://youtu.be/eC9-iRN2b04
- https://cmake.org/cmake/help/latest/index.html
- https://github.com/kev0960/cmake-for-all
