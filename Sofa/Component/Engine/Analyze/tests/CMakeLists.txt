cmake_minimum_required(VERSION 3.22)

project(Sofa.Component.Engine.Analyze_test)

set(SOURCE_FILES
    AverageCoord_test.cpp
    ClusteringEngine_test.cpp
    Engine.Analyze_DataUpdate_test.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} Sofa.Testing Sofa.Component.Engine.Testing)
target_link_libraries(${PROJECT_NAME} Sofa.Component.Engine.Analyze Sofa.Component.StateContainer)


add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
