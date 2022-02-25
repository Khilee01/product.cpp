
void a::view()
{
int m;
char number[5];
cout&lt;&lt;"Enter Bus Number: ";
cin&gt;&gt;number;
for(m=0;m&lt;=t;m++)
{
if(strcmp(bus[m].bus_number, number)==0) break;
}
while(m&lt;=t)
{
bus_line('*');
cout&lt;&lt;"Bus Number: \t"&lt;&lt;bus[m].bus_number
&lt;&lt;"\nDriver: \t"&lt;&lt;bus[m].bus_driver&lt;&lt;"\t\tArrival Time: \t"
&lt;&lt;bus[m].bus_arrival&lt;&lt;"\tDeparture Time:"&lt;&lt;bus[m].bus_depart
&lt;&lt;"\nFrom: \t\t"&lt;&lt;bus[m].b_from&lt;&lt;"\t\tTo: \t\t"&lt;&lt;
bus[m].b_to&lt;&lt;"\n";
bus_line('*');
bus[0].position(m);
int d=1;
for (int x=0; x&lt;8; x++)
{
for(int y=0;y&lt;4;y++) { d++; if(strcmp(bus[m].bus_seat[x][y],"Empty")!=0) cout&lt;&lt;"\nThe Seat no "&lt;&lt;(d-1)&lt;&lt;" is Reserved for "&lt;&lt;bus[m].bus_seat[x][y]&lt;&lt;"."; }
}
break;
}
if(m&gt;t)
cout&lt;&lt;"Enter Correct Bus Number: ";
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
void a::view()
{
int m;
char number[5];
cout&lt;&lt;"Enter Bus Number: ";
cin&gt;&gt;number;
for(m=0;m&lt;=t;m++)
{
if(strcmp(bus[m].bus_number, number)==0) break;
}
while(m&lt;=t)
{
bus_line('*');
cout&lt;&lt;"Bus Number: \t"&lt;&lt;bus[m].bus_number
&lt;&lt;"\nDriver: \t"&lt;&lt;bus[m].bus_driver&lt;&lt;"\t\tArrival Time: \t"
&lt;&lt;bus[m].bus_arrival&lt;&lt;"\tDeparture Time:"&lt;&lt;bus[m].bus_depart
&lt;&lt;"\nFrom: \t\t"&lt;&lt;bus[m].b_from&lt;&lt;"\t\tTo: \t\t"&lt;&lt;
bus[m].b_to&lt;&lt;"\n";
bus_line('*');
bus[0].position(m);
int d=1;
for (int x=0; x&lt;8; x++)
{
for(int y=0;y&lt;4;y++) { d++; if(strcmp(bus[m].bus_seat[x][y],"Empty")!=0) cout&lt;&lt;"\nThe Seat no "&lt;&lt;(d-1)&lt;&lt;" is Reserved for "&lt;&lt;bus[m].bus_seat[x][y]&lt;&lt;"."; }
}
break;
}
if(m&gt;t)
cout&lt;&lt;"Enter Correct Bus Number: ";
}
