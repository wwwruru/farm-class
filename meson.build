project('tutorial', 'cpp', version : '0.0.2')

qt5_dep = dependency('qt5', modules: ['Core'], method : 'qmake')

executable('Farm', 'main.cpp',
           'animals.cpp','animals.h',
           'Horse.cpp','Horse.h',
           'People.cpp','People.h',
           'Snake.cpp','Snake.h',
           dependencies : [qt5_dep])