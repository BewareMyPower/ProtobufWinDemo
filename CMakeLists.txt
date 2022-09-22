cmake_minimum_required (VERSION 3.8)

project ("ProtobufDemo")

set(CMAKE_CXX_STANDARD 11)

set(VCPKG_ROOT ${CMAKE_SOURCE_DIR}/vcpkg_installed/x64-windows-static)
set(CMAKE_PREFIX_PATH ${VCPKG_ROOT})
find_package(protobuf REQUIRED)

set(PROTO_SOURCES
    ${CMAKE_SOURCE_DIR}/PulsarApi.pb.cc
    ${CMAKE_SOURCE_DIR}/PulsarApi.pb.h)
add_custom_command(
    OUTPUT ${PROTO_SOURCES}
    COMMAND ${VCPKG_ROOT}/tools/protobuf/protoc -I . ./PulsarApi.proto --cpp_out=${CMAKE_SOURCE_DIR}
    DEPENDS ./PulsarApi.proto
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

if (MSVC)
    add_compile_options(
        $<$<CONFIG:>:</MT>
        $<$<CONFIG:Debug>:</MT>
        $<$<CONFIG:Release>:</MT>
        $<$<CONFIG:RelWithDebInfo>:</MT>
    )
endif ()

message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
message(STATUS "CMAKE_CXX_FLAGS_DEBUG: " ${CMAKE_CXX_FLAGS_DEBUG})
message(STATUS "CMAKE_CXX_FLAGS_RELEASE: " ${CMAKE_CXX_FLAGS_RELEASE})
message(STATUS "CMAKE_CXX_FLAGS_RELWITHDEBINFO: " ${CMAKE_CXX_FLAGS_RELWITHDEBINFO})

add_executable(Main Main.cc ${PROTO_SOURCES})
include_directories(${Protobuf_INCLUDE_DIRS})
target_link_libraries(Main PRIVATE ${Protobuf_LIBRARIES})
