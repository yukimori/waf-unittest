
APPNAME = 'waf_unittest'
VERSION = '0.1.0'

top = '.'
out = 'build'

def options(opt):
    opt.load('compiler_cxx unittest_gtest')

def configure(conf):
    conf.load('compiler_cxx unittest_gtest')

def build(bld):
    bld.stlib(
        source = 'lib.cpp',
        includes = '.',
        target = 'lib')

    bld.stlib(
        source = 'myint.cpp',
        includes = '.',
        target = 'myint')

    bld.program(features = 'gtest',
                source = 'test.cpp',
                includes = '.',
                target = 'test',
                use = 'lib')

    bld.program(features = 'gtest',
                source = 'test2.cpp',
                includes = '.',
                target = 'test2',
                use = 'lib')

    bld.program(features = 'gtest',
                source = 'gtest_example.cpp',
                includes = '.',
                target = 'gtest_example',
                use = 'lib')

    bld.program(features = 'gtest',
                source = 'gtest_example2.cpp',
                includes = '.',
                target = 'gtest_example2',
                use = '')

    bld.program(features = 'gtest',
                source = ['gtest_myint.cpp'],
                includes = '.',
                target = 'gtest_myint',
                use = 'myint')

def shutdown(ctx):
    pass

