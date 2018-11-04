mkdir test0 test2
touch test1 test3 test4
ln -s test0 test6
ln test3 test5

echo '1' > test4
echo '123' > test1
echo > test3

chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3

chmod 641 test4
touch -t 06012047 test0
touch -t 06012146 test1
touch -t 06012245 test2
touch -t 06012344 test3
touch -t 06012343 test4
touch -h -t 06012220 test6

rm -rf ex00.sh
