set(gtest_disable_pthreads ON CACHE BOOL "")
add_subdirectory(gtest)

set(TEST_SOURCES
	functions/functions_test.cpp
	classes/person_test.cpp
	)

include_directories(
	../
	gtest/include
	)

add_executable(test
	${TEST_SOURCES}
	)

target_link_libraries(test
	gtest
	gtest_main
	functions
	classes
	)
