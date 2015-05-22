# NOTICE:
#
# Application name defined in TARGET has a corresponding QML filename.
# If name defined in TARGET is changed, the following needs to be done
# to match new name:
#   - corresponding QML filename must be changed
#   - desktop icon filename must be changed
#   - desktop filename must be changed
#   - icon definition filename in desktop file must be changed
#   - translation filenames have to be changed

# The name of your application
TARGET = cppqml

CONFIG += sailfishapp

SOURCES += src/cppqml.cpp

OTHER_FILES += qml/cppqml.qml \
    qml/pages/FirstPage.qml \
    rpm/cppqml.changes.in \
    rpm/cppqml.spec \
    rpm/cppqml.yaml \
    cppqml.desktop
