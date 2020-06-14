# Statistica

##### Statistica is a lightweight statistics library written in C.

## Usage
###### First download or clone the statistica.h file from this repo, and then include it in your program with `#include "statistica.h"`. Now all the statistica functions should be available for usage.

## Records and recordings
###### The core concepts of statistica are records and recordings. A record is simply a float, or a integer that needs to be remembered for later analyzation, a record is therefore just a piece of data. <br><br> A recording is what stores the records. It is the dataset that you want to be analyzed.

## Recordings
###### The first thing you must do before using statistica, is creating a emptyRecording, this is done as follows:
```c
#include "statistica.h"

int main(){
  recording R = emptyRecording();
}
```
###### The emptyRecording function creates an emptyRecording (on the heap, meaning it needs to be freed from the memory after your done) that you can use to store your data in.

## Records

###### To insert a record into a recording, you must use the `addIntRecord()` or `addFloatRecord()` function. You must pass the recording, and the data as arguments. this is done as follows:
```c
#include "statistica.h"

int main(){
  recording R = emptyRecording();

  addIntRecord(&R, 5);
  addIntRecord(&R, 6);
  addIntRecord(&R, 7);
  addFloatRecord(&R, 10.6);
  addFloatRecord(&R, 10.5);
  addFloatRecord(&R, 10.99);
}
```

## Anaylzation

###### After you have gathered your data, it is time to analyze your data. You can get the max, min, mean, and sum (more will come in the future). This is done like this:
```c
#include "statistica.h"

int main(){
  recording R = emptyRecording();

  addIntRecord(&R, 5);
  addIntRecord(&R, 6);
  addIntRecord(&R, 7);
  addFloatRecord(&R, 10.6);
  addFloatRecord(&R, 10.5);
  addFloatRecord(&R, 10.99);
  listRecording(R);// print all the data in a list

  puts("--------\n");

  printf("max: %f\n", recordingMax(R));
  printf("min: %f\n", recordingMin(R));
  printf("sum: %f\n", recordingSum(R));
  printf("mean: %f\n", recordingMean(R));
}
```

## Result:<br>
![result image](https://media.discordapp.net/attachments/485859146558865408/721815788218089522/unknown.png)
