#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("hhh", "g","vv");
Tab B = Tab("qq", "h","rrr");
Tab C = Tab("k", "x","lll");
Tab D = Tab("d", "ttt","zz");
Tab E = Tab("u", "gg","rrr");
Tab F = Tab("p", "ooo","c");
Tab G = Tab("zzz", "ff","g");
Tab H = Tab("ggg", "aaa","xx");
Tab I = Tab("v", "j","m");
Tab J = Tab("mm", "gg","qqq");
Tab K = Tab("tt", "t","uuu");
Tab L = Tab("ii", "w","dd");
Tab M = Tab("l", "mmm","b");
Tab N = Tab("v", "mm","ss");
Tab O = Tab("eee", "vv","pp");
Tab P = Tab("ccc", "ooo","r");
Tab Q = Tab("ff", "x","ooo");
Tab R = Tab("xxx", "www","fff");
Tab S = Tab("i", "zzz","iii");
Tab T = Tab("e", "aaa","ttt");
Tab U = Tab("y", "gg","gg");
Tab V = Tab("aaa", "ii","bb");
Tab W = Tab("xx", "uuu","sss");
Tab X = Tab("gg", "dd","c");
Tab Y = Tab("s", "p","nnn");
Tab Z = Tab("aa", "oo","h");
a.newTab(A);
b.moveActiveTabTo(0);
c.newTab(B);
d.newTab(C);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(D);
d.newTab(E);
a.newTab(F);
b.changeActiveTabTo(4);
c.newTab(G);
d.moveActiveTabTo(4);
a.newTab(H);
b.changeActiveTabTo(2);
c.newTab(I);
d.newTab(J);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(K);
a.newTab(L);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(M);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(N);
d.moveActiveTabTo(0);
a.newTab(O);
b.changeActiveTabTo(4);
c.newTab(P);
d.moveActiveTabTo(4);
a.newTab(Q);
b.newTab(R);
c.newTab(S);
d.newTab(T);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(U);
a.newTab(V);
b.newTab(W);
c.newTab(X);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.newTab(Y);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(Z);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(3);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
d.changeActiveTabTo(2);
c.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
a.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(1);
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(0);
brows->switchToWindow(2);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(1);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->switchToWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->switchToWindow(4);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(6);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(0);
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
delete brows;
}
	return 0;
};