int n, s, a[100][100], d[100], e[100], vs[100];
void Dijkstra(int s){int u, v;
 for (v=1; v<= n; v++){d[v]= a[s][v]; e[v]=s;}
    d[s]= 0; e[s] = 0; vs[s]= 1;//d[1]=0,e[1]=0,vs[1]=1
while (1){int u= 0, min= 32767;
 for (v=1; v<= n; v++) if (vs[v]==0 && d[v]< min){
         u= v; min= d[v];//u=2,min=7 -> ....->u=5,min=2
		 }
 if (u== 0) return;
 vs[u]= 1;//vs[5]=1
 for (v=1; v<=n; v++)//2 -> 4
  if (vs[v]== 0 && d[v]> d[u]+a[u][v]) {d[v]= d[u] + a[u][v]; e[v] = u; }
  }//7>2+a[5][2]=vo cung,....,(vs[4]=0,d[4]=8>d[5]+a[5][4]=2+1)
}

