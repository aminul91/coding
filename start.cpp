#include <iostream>
#include <stdlib.h>
#include <string>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <mysql_driver.h>

using namespace std;

int main() {

    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    driver = sql::mysql::get_mysql_driver_instance();
    cout<<"hello";
    con = driver->connect("tcp://127.0.0.1:81", "root", "");

    delete con;
    return 0;
    //https://dev.mysql.com/doc/connector-cpp/1.1/en/connector-cpp-examples-connecting.html
}   //https://stackoverflow.com/questions/15995319/c-mysql-connector-undefined-reference-to-get-driver-instance-already-tri