using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Duck_2_Spark__Attiny_85_
{
    public class Encoder
    {
        private static string layout = "";
        /* contains the keyboard configuration */
        public static byte[] Encode(string Script, string layout = "us")
        {
            Script.Replace("\r", "");
            string[] lines = Script.Split('\n');
            List<byte> data = new List<byte>();
            List<string[]> Instructions = new List<string[]>();
            foreach (string line in lines)
            {
                var x = line.Split(' ');
                string[] xx = { "", "" };
                xx[0] = x[0];
                x[0] = "";
                xx[1] = string.Join(" ", x);
                Instructions.Add(xx);
            }
            foreach (var instruction in Instructions)
            {
                if (instruction[0].Equals("REM"))
                {
                    continue;
                }
                else if (instruction[0].Equals("STRING"))
                {
                    for (int j = 0; j < instruction[1].Length; j++)
                    {
                        char c = instruction[1][j];
                        //addBytes(keyboard, charToBytes(c));
                    }
                }
            }
            return data.ToArray();
        }
        static byte[] charToBytes(char c)
        {
            return codeToBytes(charToCode(c));
        }
        static string charToCode(char c)
        {
            string code;
            if (c < 128)
            {
                code = "ASCII_" + Convert.ToString(c, 16).ToUpper();
            }
            else if (c < 256)
            {
                code = "ISO_8859_1_" + Convert.ToString(c, 16).ToUpper();
            }
            else
            {
                code = "UNICODE_" + Convert.ToString(c, 16).ToUpper();
            }
            return code;
        }

        static byte[] codeToBytes(string str)
        {
            if (layoutProps.getProperty(str) != null)
            {
                string keys[] = layoutProps.getProperty(str).split(",");
                byte[] byteTab = new byte[keys.length];
                for (int j = 0; j < keys.length; j++)
                {
                    string key = keys[j].trim();
                    if (keyboardProps.getProperty(key) != null)
                    {
                        byteTab[j] = strToByte(keyboardProps.getProperty(key).trim());
                    }
                    else if (layoutProps.getProperty(key) != null)
                    {
                        byteTab[j] = strToByte(layoutProps.getProperty(key).trim());
                    }
                    else
                    {
                        Console.WriteLine("Key not found:" + key);
                        byteTab[j] = (byte)0x00;
                    }
                }
                return byteTab;
            }
            else
            {
                Console.WriteLine("Char not found:" + str);
                byte[] byteTab = new byte[1];
                byteTab[0] = (byte)0x00;
                return byteTab;
            }
        }
    }
}

