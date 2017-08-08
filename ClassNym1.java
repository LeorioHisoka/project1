import java.io.IOException;
import java.util.Scanner;
public class ClassNym1 {
	static Scanner InPutInt=new Scanner(System.in);
	static Scanner InPutC=new Scanner(System.in);
	public static char[] Marks={'|','=','x','o'};
	public static char PlayerMark='x';
	static boolean  Cheak=true,restart=true,PlayLoop=true,Won=false;
	static int Played=0,y=0;
	public static char[][] array={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	public static void Display(char DMarkOfPlayer){
		//System.out.println("TheDisplayStart");
			for (int row1=2;row1>=0;row1--){
			for (int column=1;column<=7;column++){
				System.out.print(Marks[1]);}
			System.out.print("\n");
			for (int Row2=0;Row2<3;Row2++){
				System.out.print(Marks[0]+""+array[row1][Row2]);}
			System.out.print(Marks[0]);
			System.out.print("\n"); }
		for (int Row3=1;Row3<=7;Row3++){
			System.out.print(Marks[1]);}
		//System.out.println("\nTheDisplayEnd");
	}
	public static void TakeInPutFromTheUser(char WhosThePlayer){
		//System.out.println("\nTheTakeInPutFunc");
			System.out.println("\nThe Enter of Player\"" + WhosThePlayer + "\" : ");
			Played = InPutInt.nextInt();	
			//System.out.println("\nTheTakeInPutEnd");
			}
	public static void CheakIfTheInputIsCorrect(){
		//System.out.println("\nTheCheakIfTheCheakIfTheInputIsCorrectStart");	
		if(Played>=1&&Played<=9){
			CheakIfTheInputHasNotTakenYet();
		}else{
			System.out.println("\nTheNumberYouJastHaveEnteredIsOutOfRangeTryAgainPlease\n");
			//System.out.println("\nTheCheakIfTheCheakIfTheInputIsCorrectEnd");
			TakeInPutFromTheUser(PlayerMark);
		}
		
		
	}
	public static boolean CheakIfTheInputHasNotTakenYet(){
		Cheak=true;
		//System.out.println("\nTheCheakIfTheInputHasNotTakenYetStart");
		switch(Played){
		case 1 :
			if(array[0][0]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 2 :
			if(array[0][1]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 3 :
			if(array[0][2]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 4 :
			if(array[1][0]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 5 :
			if(array[1][1]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 6 :
			if(array[1][2]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 7 :
			if(array[2][0]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 8 :
			if(array[2][1]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		case 9 :
			if(array[2][2]==PlayerMark){
				//TakeInPutFromTheUser(PlayerMark);
			Cheak=false;
			break;}
		default:
			//System.out.println("Something Went Worng1");
		}
		/*for(int Row=0;Row<3;Row++){
				if(array[Row][0]==Marks[2]||array[Row][0]==Marks[3]){
					System.out.println("It Seems that this place has been already taken");
					Cheak=false;
					break;
				}else if(array[Row][1]==Marks[2]||array[Row][1]==Marks[3]){
					System.out.println("It Seems that this place has been already taken");
					Cheak=false;
					break;
				}else if(array[Row][2]==Marks[2]||array[Row][2]==Marks[3]){
					System.out.println("It Seems that this place has been already taken");
					Cheak=false;
					break;
				}
		}*/
		if(Cheak==true)
			System.out.println("");
		else{
			System.out.println("\nThis Place Has Taken");
		TakeInPutFromTheUser(PlayerMark);}
		//System.out.println("\nTheCheakIfTheInputHasNotTakenYetEnd");
		return Cheak;	
	}
	public static void PostInPut(int PPlayed,char PPlayerMark){
		//System.out.println("\nTheInPutFunc");	
		switch (PPlayed) {
			case 1 :
				array[0][0]=PPlayerMark;break;
			case 2 :
				array[0][1]=PPlayerMark;break;
			case 3 :
				array[0][2]=PPlayerMark;break;
			case 4 :
				array[1][0]=PPlayerMark;break;
			case 5 :
				array[1][1]=PPlayerMark;break;
			case 6 :
				array[1][2]=PPlayerMark;break;
			case 7 :
				array[2][0]=PPlayerMark;break;
			case 8 :
				array[2][1]=PPlayerMark;break;
			case 9 :
				array[2][2]=PPlayerMark;break;
			default:
				System.out.println("Something Went Worng2");
			}
		//System.out.println("\nTheInPutEnd");	
	}
	public static void CheckForWinner(char markOfPlayer){
		//System.out.print("\nTheCheckForWinnerFunc");	
		//for(int t=1;t<=2;t++){
			//markOfPlayer
		if(array[0][0]==markOfPlayer&&array[0][1]==markOfPlayer&&array[0][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[1][0]==markOfPlayer&&array[1][1]==markOfPlayer&&array[1][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[2][0]==markOfPlayer&&array[2][1]==markOfPlayer&&array[2][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[0][0]==markOfPlayer&&array[1][1]==markOfPlayer&&array[2][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[0][2]==markOfPlayer&&array[1][1]==markOfPlayer&&array[2][0]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[0][0]==markOfPlayer&&array[1][0]==markOfPlayer&&array[2][0]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[1][0]==markOfPlayer&&array[1][1]==markOfPlayer&&array[1][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[2][0]==markOfPlayer&&array[2][1]==markOfPlayer&&array[2][2]==markOfPlayer){
			System.out.println("\nThe Player "+markOfPlayer+" has won");
			Won=true;
		}else
		if(array[0][1]==markOfPlayer&&array[1][1]==markOfPlayer&&array[2][1]==markOfPlayer){
				System.out.println("\nThe Player "+markOfPlayer+" has won");
				Won=true;
			}		
		//System.out.println("\nTheCheckForWinnerEnd");	
		//}
	}
	public static void TheCallingFunc(boolean player){
		//System.out.println("\n4");	
			Display(PlayerMark);
			CheckForWinner('o');
			CheckForWinner('x');
			//System.out.println("\n5");	
			if(Won=false){
				return;
			}
			//System.out.println("\n3");	
			TakeInPutFromTheUser(PlayerMark);
			CheakIfTheInputIsCorrect();
			PostInPut(Played,PlayerMark);
	}
	public static void EmptyArray(){
		for (int u=1;u<=9;u++)
			PostInPut(u,' ');
	}
	public static void PlayAgain(){
		System.out.println("\nType 1 For Yes ,else For No: ");
		System.out.println("Do You Want To Start Again ?: ");
		Played = InPutInt.nextInt();	
		if(Played==1){
			Won=false;
		}
			
		else{
			restart=false;
		}
	}public static void Firsttime(){
		Display(PlayerMark);
		System.out.println("\nType \'1\' For Yes");
		System.out.println("\nAre You Ready : ?");
		y = InPutInt.nextInt();
		if(y==1){
			EmptyArray();
			Won=false;
		}
		else {
			Won=true;
		}
	}
	public static int main0(){
		while (restart==true){
			Firsttime();
			while(Won==false){
				
				if(PlayLoop==true){
					PlayerMark=Marks[2];
					TheCallingFunc(true);
					PlayLoop=false;
				}else if(PlayLoop==false){
					PlayerMark=Marks[3];
					TheCallingFunc(false);
					PlayLoop=true;
				}else{
					System.out.println("\nSomethingWentWorngInMainFunc");
				}
			}
			PlayAgain();
			
		}
		if(restart==true)
			return main0();
		else
			return 0;
	}
	public static void main(String[] args)  throws IOException, InterruptedException{
		main0();
		System.out.println("\nGoodBey");
	}
}