using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Duck_2_Spark__Attiny_85_
{
    class codegen
    {
        public static string generate_source(
            byte[] payload,
            int loop_count = 1,
            int loop_delay = 5000,
            bool blink = true)
        {
            var head = Properties.Resources.head;
            var init = Properties.Resources.init;
            var body = String.Format(Properties.Resources.body, loop_delay, loop_delay);
            var tail = @"}
";
            var l = payload.Length;
            // payload into FLASH memory of digispark
            var declare = "#define DUCK_LEN " + l.ToString() + "\nconst PROGMEM uint8_t duckraw [DUCK_LEN] = {\n\t";
            //foreach (var c in range(l - 1))
            for (int c = 0; c != l - 1; c++)
            {
                string y = Convert.ToString(payload[c], 16).ToUpper();
                declare += y + ", ";
            }
            declare += Convert.ToString(payload[l - 1], 16).ToUpper() + String.Format("\n};\nint i = %d; //how many times the payload should run (-1 for endless loop)\n", loop_count);
            declare += "bool blink=true;\n";
            return head + declare + init + body + tail;
        }
    }
}
