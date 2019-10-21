set(MODULE_NAME ${PROJECT_NAME}Tests)
project(${MODULE_NAME})
message("MODULE_NAME --> " ${MODULE_NAME})

set(CMAKE_CXX_FLAGS  -pthread)

file(GLOB SOURCES "main.cpp" "*.cpp" "*/*.cpp"  "../main/Module/*.cpp" "../main/Module/*.hpp")
message("${MODULE_NAME} Sources --> " ${SOURCES})

add_executable(${MODULE_NAME} ${SOURCES})

target_include_directories(${MODULE_NAME} PRIVATE  ../main/Module/ )

#https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
target_link_libraries(${MODULE_NAME}  gtest)
