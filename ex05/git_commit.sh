#!/bin/bash

git_ids= $(git rev-list master --first-parent)



echo ${git_ids:1:40}


