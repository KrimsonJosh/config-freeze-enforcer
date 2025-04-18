# config-freeze-enforcer

C++ tool to check for freeze periods in data and freeze

## Features
- Check if a given date is a deployment freeze day (e.g black friday, election day)
- Enforce default privacy policy if missing
- Tests using gTest (googleTest)

## Build / Run
```bash
mkdir build && cd build
cmake ..
make
./runTests
