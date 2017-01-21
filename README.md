# pythonCppIntegrationUsingSwig
Steps of Python and C++ integration using Swig under linux distribution. 

******************Dependency*******************************************
  Python 3.4
  GCC 4.8.4
  SWIG 3.0.8
  *you can use other version of python as well
  *need to check python.h install at location '/home/your_username/include/python3.4m'
  
******************Installing Swig 3.0.8 :******************************
  
  https://sourceforge.net/projects/swig/files/swig/swig-3.0.8/
  
  cd SWIG 3.0.8/
  ./configure --prefix=/usr --without-clisp --without-maximum-compile-warnings && make
  sudo make install
  
  
  
  
**********************Steps to Build This program**************************
  
  swig -c++ -python motioncues.swig
  
  gcc -I/home/your_username/include/python3.4m -fPIC -c rectangle_wrap.cxx
  
  gcc -I/home/your_username/include/python3.4m -fPIC -c rectangle.cpp
  
  g++ -shared rectangle_wrap.o rectangle.o -o _rectangle.so
  
  **_rectangle.so can be use in python program 'testpythoncpp.py'
