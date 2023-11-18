set(LIB_NAME raytracer_utils)

# Make an automatic library - will be static or dynamic based on user setting
add_library(${LIB_NAME} STATIC
  vec3.cpp
  color.cpp
  ray.cpp
)

# We need this directory, and users of our library will need it too
target_include_directories(${LIB_NAME} PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)

# All users of this library will need at least C++11
target_compile_features(${LIB_NAME} PUBLIC cxx_std_11)
