using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace KTSolution
{
    public partial class KTGUI : Form
    {
        movement mvmt = new movement();
        KnightsTour kt;
        bool flag = true;

        public KTGUI()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DrawBoard();
            this.Resize += new System.EventHandler(this.Form1_Resize);
            Form1_Resize(sender, e);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            DrawBoard();
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            
            if (numericUpDown2.Value > numericUpDown1.Value)
            {
                flag = false;
                numericUpDown2.Value = numericUpDown1.Value;
            }

            if (numericUpDown3.Value > numericUpDown1.Value)
            {
                flag = false;
                numericUpDown3.Value = numericUpDown1.Value;
            }

            flag = true;

            numericUpDown2.Minimum = 1;
            numericUpDown3.Minimum = 1;
            numericUpDown2.Maximum = numericUpDown1.Value;
            numericUpDown3.Maximum = numericUpDown1.Value;
            DrawBoard();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            DrawBoard();
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            DrawBoard();
        }

        private void DrawBoard()
        {
            kt = new KnightsTour(Convert.ToInt32(numericUpDown1.Value), Convert.ToInt32(numericUpDown1.Value));
            mvmt.x = Convert.ToInt32(numericUpDown2.Value - 1);
            mvmt.y = Convert.ToInt32(numericUpDown3.Value - 1);
            kt.Move(mvmt);
            pictureBox1.Load(Drawing.WriteImageFile(kt.moves, numericUpDown1.Value, checkBox1.Checked, checkBox2.Checked));
            label5.Text = Convert.ToString(kt.moves.Count);

            if(kt.moves.Count -1 == Math.Pow(Convert.ToDouble(numericUpDown1.Value),2) -1)
            {
                label5.ForeColor = Color.Green;
            }
            else
            {
                label5.ForeColor = Color.Red;
            }

        }

        private void numericUpDown2_ValueChanged(object sender, EventArgs e)
        {
            if (flag)
            {
                DrawBoard();
            }
        }

        private void numericUpDown3_ValueChanged(object sender, EventArgs e)
        {
            if (flag)
            {
                DrawBoard();
            }
        }

        private void Form1_Resize(object sender, EventArgs e)
        {
            pictureBox1.Width = this.Width - 45;
            pictureBox1.Height = this.Height - 120;
        }

    }
}
