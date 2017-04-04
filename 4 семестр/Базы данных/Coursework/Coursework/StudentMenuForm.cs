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
    public partial class StudentMenuForm : Form
    {
        public StudentMenuForm()
        {
            InitializeComponent();
        }

        public StudentMenuForm(String studentName)
        {
            InitializeComponent();
            this.studentNameLabel.Text = studentName;
        }

        private void StudentMenuForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'accessDataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter1.Fill(this.accessDataSet.Student);
        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            LoginForm.GetLoginForm().Show();
            this.Close();
        }
    }
}
