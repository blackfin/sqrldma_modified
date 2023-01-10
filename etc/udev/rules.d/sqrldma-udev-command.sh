#!/bin/bash
#
# Renames sqrldma%d_c2h_%d to sqrldma/card%d/c2h%d
# Renames sqrldma%d_h2c_%d to sqrldma/card%d/h2c%d
# Renames sqrldma%d_user   to sqrldma/card%d/user
# etc.
#
# Leon Woestenberg <leon@sidebranch.com>

echo $1 | \
/bin/sed 's:sqrldma\([0-9][0-9]*\)_events_\([0-9][0-9]*\):sqrldma/card\1/events\2:' | \
/bin/sed 's:sqrldma\([0-9][0-9]*\)_\([ch]2[ch]\)_\([0-9]*\):sqrldma/card\1/\2\3:' | \
/bin/sed 's:sqrldma\([0-9][0-9]*\)_bypass_\([ch]2[ch]\)_\([0-9]*\):sqrldma/card\1/bypass_\2\3:' | \
/bin/sed 's:sqrldma\([0-9][0-9]*\)_\([a-z]*\):sqrldma/card\1/\2:'


