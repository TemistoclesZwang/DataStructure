def main():
   E = [10,10,7,10]
   D = [6,4,2,4]
   
   A = [[2,2,3,2], [0,2,1,2], [2,2,1,2], [0,0,2,0]]
   R = [[5,0,2,0], [2,5,0,2], [3,2,0,2], [2,0,1,0]]

   iniciar(D,R,A,E)


def iniciar(D, R, A, E):
   flag = 0

   for i in range(len(D)):
      if flag == 4:
         D[0] += A[i-1][0]
         D[1] += A[i-1][1]
         D[2] += A[i-1][2]
         D[3] += A[i-1][3]
      flag = 0 

      for j in range(len(D)): #faz quatro vezes
         if R[j][flag] - A[j][flag] <= D[flag]: #os quatro tem que ser menor pra +=
         # if R[j][flag] <= D[flag]: #FIXME:antigo
            flag += 1

   deadlock(D,E)


def deadlock(D,E):
   for i in range(0,len(D)): #ao final disponíveis tem que ser == existentes
      if D[i] == E[i]:
         print(f'\n Processo {i} SEM deadlock')
      else:
         print(f'\n Processo {i} COM deadlock')

if __name__ == "__main__":
   main()




# def deadlock(D,E):

#    if D == E:
#       print('Sem deadlock')
#    else:
#       print('Deadlock')