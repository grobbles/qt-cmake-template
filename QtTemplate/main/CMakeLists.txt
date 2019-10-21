set(MODULE_NAME ${PROJECT_NAME})
project(${MODULE_NAME})

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Turn on automatic invocation of the MOC, UIC & RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Make this a GUI application on Windows
if(WIN32)
  set(CMAKE_WIN32_EXECUTABLE ON)
endif()

# Find the QtWidgets library
find_package(Qt5 REQUIRED COMPONENTS Widgets)

file(GLOB SOURCES "main.cpp" "*.cpp" "*.hpp" "*.h"  "*.ui" "*/*.cpp" "*/*.hpp"  "*/*.ui" "*/*.h")
message(${SOURCES})
# Tell CMake to create the helloworld executable
add_executable(${MODULE_NAME} ${SOURCES})

# Add the Qt5 Widgets for linking
target_link_libraries(${MODULE_NAME} Qt5::Widgets)
