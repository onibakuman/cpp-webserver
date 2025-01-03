cmake_minimum_required(VERSION 3.12)
project(WebInterfaceCpp)

set(CMAKE_CXX_STANDARD 17)

# Add Crow as an external dependency
include(FetchContent)
FetchContent_Declare(
  crow
  GIT_REPOSITORY https://github.com/CrowCpp/Crow.git
  GIT_TAG v1.0+1
)
FetchContent_MakeAvailable(crow)

# Create the executable
add_executable(WebInterfaceCpp main.cpp)
target_link_libraries(WebInterfaceCpp PRIVATE Crow::Crow)

