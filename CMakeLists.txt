cmake_minimum_required(VERSION 3.5)

project(QPlayerWithOpenCV VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(OpenCV_DIR D:\\rain_programing\\vscodeProject\\buildOpenCV\\buildOpenCV\\install)
# set(OpenCV_DIR_64 D:/opencv/opencv/build/x64/vc15)

find_package(OpenCV REQUIRED)

include_directories(
    ${OpenCV_DIR}/include
	${OpenCV_INCLUDE_DIRS}
	${PROJECT_SOURCE_DIR}/include
    "D:\\anaconda\\envs\\opencv\\include"
)

 
# 添加库文件路径
set(pathToDlib D:/rain_programing/OpenSourceProject/dlib-19.24.3)
 
include(${pathToDlib}/dlib/cmake)
 
message(STATUS 
*****OpenCV_LIBS:****** ${OpenCV_LIBS} \n 
*****OpenCV_DIR:****** ${OpenCV_DIR} \n
*****OpenCV_INCLUDE_DIRS:******${OpenCV_INCLUDE_DIRS}\n)

# set_target_properties(opencv PROPERTIES
#     IMPORTED_LOCATION_DEBUG ${OpenCV_LIB_DIR}/opencv_world454d.lib
#     IMPORTED_LOCATION_RELEASE ${OpenCV_LIB_DIR}/opencv_world454.lib
# )

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS 
    Core 
    Widgets 
    Gui 
    Multimedia 
    Network
)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS    
    Core 
    Widgets 
    Gui 
    Multimedia 
    Network
)

set(PROJECT_SOURCES
        main.cpp
        player.cpp
        player.h
        player.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QPlayerWithOpenCV
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QPlayerWithOpenCV APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(QPlayerWithOpenCV SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QPlayerWithOpenCV
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# link_directories(
#     # ${OpenCV_DIR}/lib
#     "D:\\anaconda\\envs\\opencv\\libs\\"
# )
# link_libraries(
    
#     "python38"
# )
target_link_libraries(QPlayerWithOpenCV PRIVATE 
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
    Qt${QT_VERSION_MAJOR}::Network
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    ${OpenCV_LIBS} 
    "dlib::dlib"
)

# target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QPlayerWithOpenCV)
endif()
set_target_properties(QPlayerWithOpenCV PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QPlayerWithOpenCV
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QPlayerWithOpenCV)
endif()
