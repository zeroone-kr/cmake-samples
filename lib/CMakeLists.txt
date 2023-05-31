# 정적 라이브러리 shape를 만든다.
# STATIC으로 명시하면 정적 라이브러리, 
# SHARED로 설정하면 동적으로 링크되는 동적 라이브러리
# MODULE로 명시하면, 동적으로 링크되지는 않지만, dlopen과 같은 함수로 런타임 시에 불러올 수 있는 라이브러리를 생성
add_library(shape STATIC shape.cpp)


# PUBLIC, PRIVATE의 차이: A 라이브러리가 B라이브러리를 사용한다면 A는 B의 컴파일 옵션들과 헤더 파일 탐색 디렉터리 목록을 물려받는다.
# 정확히 말하면 PUBLIC으로 설정된 것은 물려 받고, PRIVATE으로 설정된 것은 물려받지 않는다.
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(shape PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# shape를 컴파일할때 헤더 파일 검색 경로에 {CMAKE_SOURCE_DIR}/includes를 추가
# shape를 참조하는 타겟 헤더 파일 검색 경로에 {CMAKE_SOUCE_DIR}/includes를 추가 


# 해당 라이브러리를 컴파일 할 옵션
target_compile_options(shape PRIVATE -Wall -Werror)
# shape를 빌드할때에는 -Wall, -Werror를 적용하고 싶지만, shape를 사용하는 애들까지 이 옵션을 강제하고 싶지 않아서 PRIVATE


