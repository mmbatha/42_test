#!python2.7

import subprocess
import sys
import os
import re


hf_re = "(.?.*\/\..*)|(.*author.*)|(.*\.[o|a])"
def	list_files(path=os.getcwd()):
	filenames = []
	pattern = re.compile(hf_re)

	for root, dirs, files in os.walk(path):
		for file in files:
			if (pattern.match(os.path.join(root, file)) == None):
				filenames.append(os.path.join(root, file)[len(path) + 1:])

	return (filenames)

def	check_author(path=os.getcwd()):
		status = 0
		msg = [ "author file found", "author file corrected",
				"author file created", "author file incorrect"]
		proc = subprocess.Popen('whoami', stdout=subprocess.PIPE)
		user = proc.stdout.read()

		if (os.path.isfile("author")):
			author_file = open("author", "r")
			if (author_file.read() != user):
				status = 1
			author_file.close
		else:
			status = 2
		if (status > 0): 
			if (len(sys.argv) == 2) and (sys.argv[1] == "--fix-auth"):
				author_file = open("author", "w")
				author_file.write(user)
				author_file.close()
			else:
				status = 3

		print (msg[status])

def	norm_files(files):
	inc = 20

	for  i in range(0, len(files), inc):
		batch = " ".join(files[i : i + inc])
		subprocess.call(["norminette -R CheckForbiddenSourceHeader "+batch], shell=True)

check_author()
files = list_files()
norm_files(files)

