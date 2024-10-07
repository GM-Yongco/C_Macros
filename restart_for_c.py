# Description		: Code that will impress u ;)
# Author			: G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
# Date				: ur my date uwu
# Real Description	: for restarting the bot when necessary
# HEADERS ================================================================

# built in
import io
import os
import time

# ========================================================================
# FUNCTIONS 
# ========================================================================

def command_with_logging(cmd_command:str = "cls") -> None:
	print("waiting a quarter-second...")
	time.sleep(0.25)
	print(f"{"command":15}: {cmd_command}\n{"exit status":15}: {os.system(cmd_command)}")

def restart_file() -> None:
	file_ptr:io.TextIOWrapper = open("./REFERENCES/restart_for_c_reference.txt", 'r')
	file_path:str = file_ptr.read()
	file_path_main:str = file_path + r"\main.c"
	file_path_exe = fr"{file_path}\test"

	if not os.path.exists(file_path_main):
		print(f"{file_path_main} does not exist.")
		return 0
	
	command_with_logging()
	command_with_logging(f"gcc {file_path_main} -o {file_path_exe}")
	command_with_logging(file_path_exe)

# ========================================================================
# RUNNER 
# ========================================================================

if __name__ == '__main__':
	restart_file()