#!/usr/bin/env python

#$learnt =~ s/-I..\/..\/..\/..\/..\//-I\/Users\/shankys\/Github\/zerocool\/objc\/Buck\//g;
#$learnt = `/tmp/injectionforxcode/injectionforxcode.py '$learnt'`;

import os
import re
import sys

home = os.path.expanduser('~')
project_root = '{}/Github/zerocool'.format(home)
buck_root = '{}/objc/Buck'.format(project_root)


def transform_compile_command(compile_command):
    """Take the given `compile_command` with relative buck-out paths, and
    transform it into a compile_command using absolute buck-out paths
    instead."""
    return re.sub('-I[./]+buck-out',
                  '-I{}/buck-out'.format(buck_root),
                  compile_command)


def write_command_to_file(command, filename):
    """Write the given `command` to the given `filename`."""
    path = '{}/perl/injectionforxcode/{}'.format(project_root, filename)
    with open(path, 'w') as f:
        f.write(command)


def debug_compile_command_transform():
    """Write compiler command before/after transform to files for debugging
    purposes."""
    compile_command_before = sys.argv[1]
    write_command_to_file(compile_command_before, 'before_xcode_compile_command.txt')
    compile_command_after = transform_compile_command(compile_command_before)
    write_command_to_file(compile_command_after, 'after_xcode_compile_command.txt')


def print_transformed_compile_command():
    """Print transformed compile command with absolute buck-out paths."""
    compile_command = sys.argv[1]
    new_compile_command = transform_compile_command(compile_command)
    print(new_compile_command)


if __name__ == '__main__':
    #debug_compile_command_transform()
    print_transformed_compile_command()
