# iCalendar File Reader

This  is a program that reads in iCalendar files (.ics) and places the information in custom data structures. The data is scanned and parsed by a custom C code (instead of an open-source solution like YACC) and the output is pushed through stdout.

## How To Run

Once file is made in directory, use one of the following flags to process ics file:

### Info

```bash
$ caltool < <icsfile> -info
```
This will display relevent information on the ics file. Such as names of organizers, number of events, number of properties, ect.
### Filter

```bash
$ caltool < <icsfile> -filter <filtercriteria>
```
This will display only certain information from the ics file. This information can be picked by date range or by organizer.
### Extract

```bash
$ caltool < <icsfile> -extract <extractcriteria> <newfile>
```
Similar to the filter flag, this will create a new ics file containing only certain information from the original ics file. This information can be picked by date range or by organizer.
### Combine

```bash
$ caltool <icsfile1> <icsfile2> -combine
```
This will combine the components of two files and place the resulting information in <icsfile1>.


