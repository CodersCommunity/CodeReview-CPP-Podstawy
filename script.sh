#!/bin/bash

#
# Create temp Error counter
#
TEMPFILE=/tmp/$$.tmp
echo 0 > $TEMPFILE

#
# Build Dir
#
BUILDDIR="`pwd`/build"
mkdir "$BUILDDIR"

#
# Main Loop
#
find ./ -type f -follow -name '*.cpp' -printf '%p\n' | 
while read filename
do
  WORKDIR=$(basename "`dirname "$filename"`")
  DIR="$BUILDDIR/$WORKDIR"
  if [ ! -d "$DIR" ]; then
    mkdir "$DIR"
  fi
  $CXX -pthread -std=c++11 -Wall -Wextra "$filename" -o "$DIR/$(basename "$filename" .cpp)" || COUNTER=$[$(cat $TEMPFILE) + 1]
  echo $COUNTER > $TEMPFILE
done

if [ $(cat $TEMPFILE) -gt 0 ]; then
   unlink $TEMPFILE
   exit 1
fi
