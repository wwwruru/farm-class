project('tutorial', 'cpp', version : '0.0.2')

qt5_dep = dependency('qt5', modules: ['Core'], method : 'qmake')

executable('Farm', 'main.cpp',
           'Animal.cpp',
           'Horse.cpp',
           'People.cpp',
           'Snake.cpp',
           dependencies : [qt5_dep])