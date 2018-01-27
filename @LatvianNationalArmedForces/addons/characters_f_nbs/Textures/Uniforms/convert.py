import os
import subprocess
rootdir = os.path.dirname(os.path.realpath(__file__))
extensions = ('.png')

for subdir, dirs, files in os.walk(rootdir):
	for file in files:
		ext = os.path.splitext(file)[-1].lower()
		if ext in extensions:
			print ("Converting " + file)
			subprocess.call(['E:\Games\SteamApps\common\Arma 3 Tools\ImageToPAA\ImageToPAA.exe', os.path.join(subdir, file)])