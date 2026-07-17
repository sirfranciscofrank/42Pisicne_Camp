#!/bin/sh
# HELPER — not the turn-in file. The ex05 filename uses characters that are
# illegal on Windows/NTFS ("  \  ?  *), so the file cannot exist on Windows.
# Run this once on your Linux/macOS turn-in machine, then delete this helper
# so ex05/ contains ONLY the required file.
#
#   sh _create_on_unix.sh && rm _create_on_unix.sh
#
# Verify with:  ls -lRa *MaRV* | cat -e
printf '42' > '"\?$*'\''MaRViN'\''*$?\"'
