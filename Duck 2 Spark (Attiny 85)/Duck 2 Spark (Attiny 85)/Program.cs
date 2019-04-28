using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Duck_2_Spark__Attiny_85_
{
    class Program
    {
        static void Main(string[] args)
        {

            /*
             * Arguments:\n"
             * -i [file ..] \t\tInput File\n
             * -o [file ..] \t\tOutput File\n
             * -l [file ..] \t\tKeyboard Layout (us/fr/pt or a path to a properties file)\n\n
             * 
             */

            string inputFile = null;
            string outputFile = null;
            string layoutFile = null;

            for (int i = 0; i < args.Length; i++)
            {
                if (args[i].Equals("--help") || args[i].Equals("-h"))
                {
                    Console.WriteLine(Properties.Resources.HelpStr);
                }
                else if (args[i].Equals("-i"))
                {
                    // encode file
                    inputFile = args[++i];
                }
                else if (args[i].Equals("-o"))
                {
                    // output file
                    outputFile = args[++i];
                }
                else if (args[i].Equals("-l"))
                {
                    // output file
                    layoutFile = args[++i];
                }
                else
                {
                    Console.WriteLine(Properties.Resources.HelpStr);
                    break;
                }
            }
        }
    }
}
