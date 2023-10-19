*10/12/23*

# Documentation of task-01

### 1. Change variable name of one declaration

#### Change

```c++
int min;
int maximum;
int i;

//Fill the list with 20 random elements
for (i = 0; i < arrayLength; i++) {
list[i] = rand();
}
//Set the minimum to be the first entry of the list
minimum = list[0];
```

#### Error message

> ```error: 'minimum' was not declared in this scope; did you mean 'maximum'?```

### 2. Remove one semicolon

#### Change

```c++
  int arrayLength = 2
int list[arrayLength];
```

#### Error message

> ```error: expected ',' or ';' before 'int'```

### 3. Change reserved keyword

#### Change

```c++
 four (i = 0; i < arrayLength; i++) {
list[i] = rand();
}
```

#### Error message

We now get an error as if we were missing a bracket because the brackets of the keyword (for) are not recognized.
> ```error: expected ')' before ';' token```

### 4. Remove closing curly bracket

#### Change

```c++
for (i = 1; i < arrayLength; i++) {
if (list[i] > maximum) {
maximum = list[i];
}
```

#### Error message(s)

> ```error: expected '}' at end of input```

> ```note: to match this '{'```

### 5. Get an element that is not present in the list

#### Change

````c++
int arrayLength = 40;
int list[arrayLength];
printf("\n ===== %i =====", list[54]);
````

#### Output

Because you're never expected to do stupid shit like this, it will result in an *undefined* behaviour - sadly no
exception.

NOTE: Just beause this throws no exception, there is no guarantee it will never. Just dont do it

```
===== -1398664384 =====
```

## Debugging

- Set breakpoints to i, minumum and maximum
- See that variables get reassigned
