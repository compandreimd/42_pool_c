find . -name '*.sh' -type f| cut -d . -f 2| rev | cut -d / -f 1 | rev
