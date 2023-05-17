#! /bin/bash

DATABASE_NAME="simple_database"
SRC_NAME="main.cpp"
if [ -d $DATABASE_NAME ]; then
	echo "Database $DATABASE_NAME exists, deleting..."
	rm -rf $DATABASE_NAME
fi
codeql database create $DATABASE_NAME --language=cpp --command="g++ $SRC_NAME"
rm a.out && echo "Deleted a.out"