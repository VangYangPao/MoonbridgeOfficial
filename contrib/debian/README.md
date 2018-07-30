
Debian
====================
This directory contains files used to package moonbridged/moonbridge-qt
for Debian-based Linux systems. If you compile moonbridged/moonbridge-qt yourself, there are some useful files here.

## moonbridge: URI support ##


moonbridge-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install moonbridge-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your moonbridgeqt binary to `/usr/bin`
and the `../../share/pixmaps/moonbridge128.png` to `/usr/share/pixmaps`

moonbridge-qt.protocol (KDE)

