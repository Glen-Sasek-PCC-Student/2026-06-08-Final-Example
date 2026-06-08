# Final Exam

[Final Exam Instructions on Google Drive](https://docs.google.com/document/d/1gp9G4CG4-8PWQGlzM_JPTPlBGhO3-coVXuvgs0IU8hg/edit?tab=t.0#heading=h.af2nvkwuqn93)

## Compile
```
g++ main.cpp
```
## Run Interactively
```
./a.out
```
## Run a Single Test
```
./a.out < test-1.txt
```

## Compile and Run all Tests Command
```
g++ main.cpp && for t in test*txt; do echo -e "\n\nTEST: $t\n"; ./a.out < $t; done; rm ./a.out
```

## Compile and Run all Tests with Script (Include the leading ./)
```
./run-tests.sh
```

## Cleanup (Always remove temporary executable program named a.out)
```
rm a.out
```