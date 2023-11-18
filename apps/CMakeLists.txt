set(TARGET_NAME raytracer_app)
add_executable(${TARGET_NAME} main.cpp)
target_compile_features(${TARGET_NAME} PRIVATE cxx_std_11)

target_link_libraries(${TARGET_NAME} PRIVATE raytracer_utils)
