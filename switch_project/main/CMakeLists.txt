# See the build system documentation in IDF programming guide
# for more information about component CMakeLists.txt files.

idf_component_register(
    SRCS main.c led_driver.c switch.c
    INCLUDE_DIRS        )
