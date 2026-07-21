add_executable(cicada)

target_sources(cicada PRIVATE src/main.cpp)
target_link_libraries(cicada
    PUBLIC cicada-core
)
