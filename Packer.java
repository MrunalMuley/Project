//ACtivity of packing

import java.util.*;
import java.io.*;

class Packer
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("---------------------------------------------");
        System.out.println("---------------Packer Unpacker---------------");
        System.out.println("---------------------------------------------");

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the name of directory:");
        String DirectoryName=sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create:");
        String PackedFile=sobj.nextLine();

        File fobjPack=new File(PackedFile);

        boolean bRet=fobjPack.createNewFile();
        if(bRet==false)
        {
            System.out.println("Unable to create packed file..");
            return;
        }

        System.out.println("Packed file gets succesfully created in current directory.");

        File fobj=new File(DirectoryName);

        bRet=fobj.isDirectory();    //inbuilt method
        if(bRet==true)
        {
            System.out.println("Directory is present");

            File Arr[]=fobj.listFiles();          //inbuilt method
            System.out.println("Number of files in directorty are:"+Arr.length);

            String Header=null;

            FileOutputStream fcombine=new FileOutputStream(PackedFile);

            int iRet=0;
            byte Buffer[]=new byte[1024];
            
            System.out.println("Packing activity started...");
            //travel directory
            for(int i=0;i<Arr.length;i++)
            {
                Header=Arr[i].getName()+" "+Arr[i].length();  //header created
                System.out.println("File packed with the name:"+Arr[i].getName());

                for(int j=Header.length();j<100;j++)
                {
                    Header=Header+" ";         //add spaces in 100 bytes of header
                }
                byte hArr[]=Header.getBytes(); //string header into byte array
                
                fcombine.write(hArr,0,100);        //writing header in combined file

                FileInputStream fiobj = new FileInputStream(Arr[i]); //writing file from directory

                while((iRet = fiobj.read(Buffer)) != -1 )
                {
                    fcombine.write(Buffer,0,iRet);    
                }
                fiobj.close();
            }
            System.out.println("Packing activity is done");
            System.out.println("Total files packed successfully:"+Arr.length);

            System.out.println("-------------------------------------");
            System.out.println("Thank you for using Packer Unpacker!!");
            System.out.println("-------------------------------------");
        }
        else
        {
            System.out.println("There is no such directory");
        }
    }
}