# Building

## Ubuntu

```bash
# dependencies
apt-get install build-essential cmake libglm-dev

# get tinynurbs via submodule
git submodule update --init --recursive

# configure
mkdir build/ && cd build/ && cmake ..

# build
make
```
