TERMUX_PKG_HOMEPAGE=https://github.com/Yisus7u7/termux-lxqt-welcome
TERMUX_PKG_DESCRIPTION="A simple welcome app for termux-desktop-lxqt made in C++ and Qt"
TERMUX_PKG_LICENSE="GPL-3.0"
TERMUX_PKG_MAINTAINER="@Yisus7u7 <yisus7u7v@gmail.com>"
TERMUX_PKG_VERSION=1.0.0
TERMUX_PKG_SRCURL=https://github.com/Yisus7u7/termux-lxqt-welcome
TERMUX_PKG_GIT_BRANCH=master
ERMUX_PKG_DEPENDS="qt5-qtbase, qt5-qtsvg"
TERMUX_PKG_BUILD_DEPENDS="qt5-qtbase-cross-tools, qt5-qttools-cross-tools"
TERMUX_PKG_BUILD_IN_SRC=true

termux_step_configure(){
    "${TERMUX_PREFIX}/opt/qt/cross/bin/qmake" \
        -spec "${TERMUX_PREFIX}/lib/qt/mkspecs/termux-cross"
}
