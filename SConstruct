CCFLAGS = '-Wall -pedantic `pkg-config --cflags gtkmm-3.0`'
LINKFLAGS = ' `pkg-config --libs gtkmm-3.0`  -lboost_filesystem -lboost_system -lboost_thread -ljpeg -lsqlite3'

main = [ 'main.cpp' ]
tests = [
'test/unit.cpp',
]
core = [
  'core/directory.cpp',
  'core/photo.cpp',
  'core/disk.cpp',
  'core/core.cpp',
  'core/configurationManager.cpp',
  'core/photoCache.cpp',
]
asynchronous = [
  'core/asynchronous.cpp',
  'core/messageQueue.cpp',
  'core/ticket.cpp'
]
gui = [
  'gui/gui.cpp',
  'gui/dialogs.cpp',
  'gui/window.cpp',
  'gui/libraryView.cpp',
  'gui/editView.cpp'
]
database = [
  'database/dbConnector.cpp',
  'database/hashFunctions.cpp'
]
plugins = [
  'plugins/pluginManager.cpp',
  'plugins/samplePlugin.cpp',
  'plugins/desaturatePlugin.cpp',
]
effects = [
  'effects/sampleEffect.cpp',
  'effects/desaturateEffect.cpp',
]

app = core + gui + database + asynchronous + plugins + effects

env = Environment(CCFLAGS = CCFLAGS, LINKFLAGS = LINKFLAGS)
env.Append(LIBS=File('/usr/lib/libboost_unit_test_framework.a'))
env.Program(target = 'imagine', source = app + main)
program = env.Program('unit_test', \
    source = app + tests
    )
test_alias = Alias('unit_test', [program], program[0].path)

AlwaysBuild(test_alias)
