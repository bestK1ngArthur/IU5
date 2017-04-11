using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Coursework
{
    public partial class StudentProgressForm : Form
    {
        public Form backForm;

        public StudentProgressForm()
        {
            InitializeComponent();
        }

        public StudentProgressForm(Form backForm)
        {
            InitializeComponent();
            this.backForm = backForm;
        }

        private void backButton_Click(object sender, EventArgs e)
        {
            this.Hide();
            backForm.Show();
        }
    }
}
