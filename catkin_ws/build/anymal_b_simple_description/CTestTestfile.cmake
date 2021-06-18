# CMake generated Testfile for 
# Source directory: /home/ooboontoo/catkin_ws/src/pronto_anymal_example/anymal_b_simple_description
# Build directory: /home/ooboontoo/catkin_ws/build/anymal_b_simple_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_anymal_b_simple_description_roslaunch-check_launch_load.launch "/home/ooboontoo/catkin_ws/build/anymal_b_simple_description/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/ooboontoo/catkin_ws/build/anymal_b_simple_description/test_results/anymal_b_simple_description/roslaunch-check_launch_load.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/ooboontoo/catkin_ws/build/anymal_b_simple_description/test_results/anymal_b_simple_description" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/ooboontoo/catkin_ws/build/anymal_b_simple_description/test_results/anymal_b_simple_description/roslaunch-check_launch_load.launch.xml\" \"/home/ooboontoo/catkin_ws/src/pronto_anymal_example/anymal_b_simple_description/launch/load.launch\" ")
subdirs("gtest")
