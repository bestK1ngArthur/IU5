namespace Coursework
{
    partial class StudentProgressForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(StudentProgressForm));
            this.backButton = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.progressBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.mainDataSet = new Coursework.mainDataSet();
            this.progressTableAdapter = new Coursework.mainDataSetTableAdapters.ProgressTableAdapter();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.attendanceBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.attendanceTableAdapter = new Coursework.mainDataSetTableAdapters.AttendanceTableAdapter();
            this.subjectBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.subjectTableAdapter = new Coursework.mainDataSetTableAdapters.SubjectTableAdapter();
            this.teacherBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.teacherTableAdapter = new Coursework.mainDataSetTableAdapters.TeacherTableAdapter();
            this.prototypeDataSet = new Coursework.PrototypeDataSet();
            this.преподавательBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.преподавательTableAdapter = new Coursework.PrototypeDataSetTableAdapters.ПреподавательTableAdapter();
            this.успеваемостьBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.успеваемостьTableAdapter = new Coursework.PrototypeDataSetTableAdapters.УспеваемостьTableAdapter();
            this.успеваемостьBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.button7 = new System.Windows.Forms.Button();
            this.посещаемостьBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.посещаемостьTableAdapter = new Coursework.PrototypeDataSetTableAdapters.ПосещаемостьTableAdapter();
            this.студентBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.студентTableAdapter = new Coursework.PrototypeDataSetTableAdapters.СтудентTableAdapter();
            this.учебныйПредметBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.учебный_предметTableAdapter = new Coursework.PrototypeDataSetTableAdapters.Учебный_предметTableAdapter();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Имя = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Отчество = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ГруппаID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Телефон = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Адрес = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.студентBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.iDDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.максимальныйБаллDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.минимальныйБаллDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.баллСтудентаDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.bindingNavigator1 = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorAddNewItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorDeleteItem = new System.Windows.Forms.ToolStripButton();
            this.преподавательBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.учебныйПредметBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.учебнаяГруппаBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.учебная_группаTableAdapter = new Coursework.PrototypeDataSetTableAdapters.Учебная_группаTableAdapter();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.учебнаяГруппаBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.кафедраBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.кафедраTableAdapter = new Coursework.PrototypeDataSetTableAdapters.КафедраTableAdapter();
            this.iDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Номер = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Название = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Факультет = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.сайтDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.progressBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.mainDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.attendanceBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.subjectBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.teacherBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.prototypeDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.преподавательBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.успеваемостьBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.успеваемостьBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.посещаемостьBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.студентBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебныйПредметBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.студентBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.bindingNavigator1)).BeginInit();
            this.bindingNavigator1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.преподавательBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебныйПредметBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебнаяГруппаBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебнаяГруппаBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.кафедраBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // backButton
            // 
            this.backButton.Location = new System.Drawing.Point(23, 22);
            this.backButton.Name = "backButton";
            this.backButton.Size = new System.Drawing.Size(112, 55);
            this.backButton.TabIndex = 0;
            this.backButton.Text = "< назад";
            this.backButton.UseVisualStyleBackColor = true;
            this.backButton.Click += new System.EventHandler(this.backButton_Click);
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.iDDataGridViewTextBoxColumn,
            this.Номер,
            this.Название,
            this.Факультет,
            this.сайтDataGridViewTextBoxColumn});
            this.dataGridView1.DataSource = this.кафедраBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(399, 195);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 33;
            this.dataGridView1.Size = new System.Drawing.Size(851, 449);
            this.dataGridView1.TabIndex = 1;
            // 
            // progressBindingSource
            // 
            this.progressBindingSource.DataMember = "Progress";
            this.progressBindingSource.DataSource = this.mainDataSet;
            // 
            // mainDataSet
            // 
            this.mainDataSet.DataSetName = "mainDataSet";
            this.mainDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // progressTableAdapter
            // 
            this.progressTableAdapter.ClearBeforeFill = true;
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.CornflowerBlue;
            this.button1.ForeColor = System.Drawing.SystemColors.Control;
            this.button1.Location = new System.Drawing.Point(23, 373);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(345, 55);
            this.button1.TabIndex = 2;
            this.button1.Text = "Кафедра";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(23, 251);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(345, 55);
            this.button2.TabIndex = 3;
            this.button2.Text = "Учебный предмет";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(23, 312);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(345, 55);
            this.button3.TabIndex = 4;
            this.button3.Text = "Учебная группа";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(23, 129);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(345, 55);
            this.button4.TabIndex = 5;
            this.button4.Text = "Студент";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(23, 190);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(345, 55);
            this.button5.TabIndex = 6;
            this.button5.Text = "Преподаватель";
            this.button5.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(422, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(424, 73);
            this.label1.TabIndex = 7;
            this.label1.Text = "Университет";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.label2.Location = new System.Drawing.Point(392, 135);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(147, 37);
            this.label2.TabIndex = 8;
            this.label2.Text = "Кафедра";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // attendanceBindingSource
            // 
            this.attendanceBindingSource.DataMember = "Attendance";
            this.attendanceBindingSource.DataSource = this.mainDataSet;
            // 
            // attendanceTableAdapter
            // 
            this.attendanceTableAdapter.ClearBeforeFill = true;
            // 
            // subjectBindingSource
            // 
            this.subjectBindingSource.DataMember = "Subject";
            this.subjectBindingSource.DataSource = this.mainDataSet;
            // 
            // subjectTableAdapter
            // 
            this.subjectTableAdapter.ClearBeforeFill = true;
            // 
            // teacherBindingSource
            // 
            this.teacherBindingSource.DataMember = "Teacher";
            this.teacherBindingSource.DataSource = this.mainDataSet;
            // 
            // teacherTableAdapter
            // 
            this.teacherTableAdapter.ClearBeforeFill = true;
            // 
            // prototypeDataSet
            // 
            this.prototypeDataSet.DataSetName = "PrototypeDataSet";
            this.prototypeDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // преподавательBindingSource
            // 
            this.преподавательBindingSource.DataMember = "Преподаватель";
            this.преподавательBindingSource.DataSource = this.prototypeDataSet;
            // 
            // преподавательTableAdapter
            // 
            this.преподавательTableAdapter.ClearBeforeFill = true;
            // 
            // успеваемостьBindingSource
            // 
            this.успеваемостьBindingSource.DataMember = "Успеваемость";
            this.успеваемостьBindingSource.DataSource = this.prototypeDataSet;
            // 
            // успеваемостьTableAdapter
            // 
            this.успеваемостьTableAdapter.ClearBeforeFill = true;
            // 
            // успеваемостьBindingSource1
            // 
            this.успеваемостьBindingSource1.DataMember = "Успеваемость";
            this.успеваемостьBindingSource1.DataSource = this.prototypeDataSet;
            // 
            // button7
            // 
            this.button7.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.button7.Location = new System.Drawing.Point(23, 528);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(199, 55);
            this.button7.TabIndex = 13;
            this.button7.Text = "Выход";
            this.button7.UseVisualStyleBackColor = false;
            // 
            // посещаемостьBindingSource
            // 
            this.посещаемостьBindingSource.DataMember = "Посещаемость";
            this.посещаемостьBindingSource.DataSource = this.prototypeDataSet;
            // 
            // посещаемостьTableAdapter
            // 
            this.посещаемостьTableAdapter.ClearBeforeFill = true;
            // 
            // студентBindingSource
            // 
            this.студентBindingSource.DataMember = "Студент";
            this.студентBindingSource.DataSource = this.prototypeDataSet;
            // 
            // студентTableAdapter
            // 
            this.студентTableAdapter.ClearBeforeFill = true;
            // 
            // учебныйПредметBindingSource
            // 
            this.учебныйПредметBindingSource.DataMember = "Учебный предмет";
            this.учебныйПредметBindingSource.DataSource = this.prototypeDataSet;
            // 
            // учебный_предметTableAdapter
            // 
            this.учебный_предметTableAdapter.ClearBeforeFill = true;
            // 
            // Column1
            // 
            this.Column1.DataPropertyName = "Фамилия";
            this.Column1.HeaderText = "Column1";
            this.Column1.Name = "Column1";
            // 
            // Имя
            // 
            this.Имя.DataPropertyName = "Имя";
            this.Имя.HeaderText = "Имя";
            this.Имя.Name = "Имя";
            // 
            // Отчество
            // 
            this.Отчество.DataPropertyName = "Отчество";
            this.Отчество.HeaderText = "Отчество";
            this.Отчество.Name = "Отчество";
            // 
            // ГруппаID
            // 
            this.ГруппаID.DataPropertyName = "ГруппаID";
            this.ГруппаID.HeaderText = "ГруппаID";
            this.ГруппаID.Name = "ГруппаID";
            // 
            // Телефон
            // 
            this.Телефон.DataPropertyName = "Телефон";
            this.Телефон.HeaderText = "Телефон";
            this.Телефон.Name = "Телефон";
            // 
            // Адрес
            // 
            this.Адрес.DataPropertyName = "Адрес";
            this.Адрес.HeaderText = "Адрес";
            this.Адрес.Name = "Адрес";
            // 
            // студентBindingSource1
            // 
            this.студентBindingSource1.DataMember = "Студент";
            this.студентBindingSource1.DataSource = this.prototypeDataSet;
            // 
            // iDDataGridViewTextBoxColumn1
            // 
            this.iDDataGridViewTextBoxColumn1.DataPropertyName = "ID";
            this.iDDataGridViewTextBoxColumn1.HeaderText = "ID";
            this.iDDataGridViewTextBoxColumn1.Name = "iDDataGridViewTextBoxColumn1";
            // 
            // максимальныйБаллDataGridViewTextBoxColumn
            // 
            this.максимальныйБаллDataGridViewTextBoxColumn.DataPropertyName = "Максимальный балл";
            this.максимальныйБаллDataGridViewTextBoxColumn.HeaderText = "Максимальный балл";
            this.максимальныйБаллDataGridViewTextBoxColumn.Name = "максимальныйБаллDataGridViewTextBoxColumn";
            // 
            // минимальныйБаллDataGridViewTextBoxColumn
            // 
            this.минимальныйБаллDataGridViewTextBoxColumn.DataPropertyName = "Минимальный балл";
            this.минимальныйБаллDataGridViewTextBoxColumn.HeaderText = "Минимальный балл";
            this.минимальныйБаллDataGridViewTextBoxColumn.Name = "минимальныйБаллDataGridViewTextBoxColumn";
            // 
            // баллСтудентаDataGridViewTextBoxColumn
            // 
            this.баллСтудентаDataGridViewTextBoxColumn.DataPropertyName = "Балл студента";
            this.баллСтудентаDataGridViewTextBoxColumn.HeaderText = "Балл студента";
            this.баллСтудентаDataGridViewTextBoxColumn.Name = "баллСтудентаDataGridViewTextBoxColumn";
            // 
            // bindingNavigator1
            // 
            this.bindingNavigator1.AddNewItem = this.bindingNavigatorAddNewItem;
            this.bindingNavigator1.CountItem = this.bindingNavigatorCountItem;
            this.bindingNavigator1.DeleteItem = this.bindingNavigatorDeleteItem;
            this.bindingNavigator1.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.bindingNavigator1.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.bindingNavigator1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem,
            this.bindingNavigatorMovePreviousItem,
            this.bindingNavigatorSeparator,
            this.bindingNavigatorPositionItem,
            this.bindingNavigatorCountItem,
            this.bindingNavigatorSeparator1,
            this.bindingNavigatorMoveNextItem,
            this.bindingNavigatorMoveLastItem,
            this.bindingNavigatorSeparator2,
            this.bindingNavigatorAddNewItem,
            this.bindingNavigatorDeleteItem});
            this.bindingNavigator1.Location = new System.Drawing.Point(0, 634);
            this.bindingNavigator1.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.bindingNavigator1.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.bindingNavigator1.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.bindingNavigator1.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.bindingNavigator1.Name = "bindingNavigator1";
            this.bindingNavigator1.PositionItem = this.bindingNavigatorPositionItem;
            this.bindingNavigator1.Size = new System.Drawing.Size(1273, 39);
            this.bindingNavigator1.TabIndex = 14;
            this.bindingNavigator1.Text = "bindingNavigator1";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorMoveFirstItem.Text = "Move first";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorMovePreviousItem.Text = "Move previous";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 39);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Position";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 39);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Current position";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(71, 36);
            this.bindingNavigatorCountItem.Text = "of {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Total number of items";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 39);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorMoveNextItem.Text = "Move next";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorMoveLastItem.Text = "Move last";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 39);
            // 
            // bindingNavigatorAddNewItem
            // 
            this.bindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorAddNewItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
            this.bindingNavigatorAddNewItem.Name = "bindingNavigatorAddNewItem";
            this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorAddNewItem.Text = "Add new";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(36, 36);
            this.bindingNavigatorDeleteItem.Text = "Delete";
            // 
            // преподавательBindingSource1
            // 
            this.преподавательBindingSource1.DataMember = "Преподаватель";
            this.преподавательBindingSource1.DataSource = this.prototypeDataSet;
            // 
            // учебныйПредметBindingSource1
            // 
            this.учебныйПредметBindingSource1.DataMember = "Учебный предмет";
            this.учебныйПредметBindingSource1.DataSource = this.prototypeDataSet;
            // 
            // учебнаяГруппаBindingSource
            // 
            this.учебнаяГруппаBindingSource.DataMember = "Учебная группа";
            this.учебнаяГруппаBindingSource.DataSource = this.prototypeDataSet;
            // 
            // учебная_группаTableAdapter
            // 
            this.учебная_группаTableAdapter.ClearBeforeFill = true;
            // 
            // Column2
            // 
            this.Column2.DataPropertyName = "ID";
            this.Column2.HeaderText = "Column2";
            this.Column2.Name = "Column2";
            // 
            // учебнаяГруппаBindingSource1
            // 
            this.учебнаяГруппаBindingSource1.DataMember = "Учебная группа";
            this.учебнаяГруппаBindingSource1.DataSource = this.prototypeDataSet;
            // 
            // кафедраBindingSource
            // 
            this.кафедраBindingSource.DataMember = "Кафедра";
            this.кафедраBindingSource.DataSource = this.prototypeDataSet;
            // 
            // кафедраTableAdapter
            // 
            this.кафедраTableAdapter.ClearBeforeFill = true;
            // 
            // iDDataGridViewTextBoxColumn
            // 
            this.iDDataGridViewTextBoxColumn.DataPropertyName = "ID";
            this.iDDataGridViewTextBoxColumn.HeaderText = "ID";
            this.iDDataGridViewTextBoxColumn.Name = "iDDataGridViewTextBoxColumn";
            // 
            // Номер
            // 
            this.Номер.DataPropertyName = "Номер";
            this.Номер.HeaderText = "Номер";
            this.Номер.Name = "Номер";
            // 
            // Название
            // 
            this.Название.DataPropertyName = "Название";
            this.Название.HeaderText = "Название";
            this.Название.Name = "Название";
            // 
            // Факультет
            // 
            this.Факультет.DataPropertyName = "Факультет";
            this.Факультет.HeaderText = "Факультет";
            this.Факультет.Name = "Факультет";
            // 
            // сайтDataGridViewTextBoxColumn
            // 
            this.сайтDataGridViewTextBoxColumn.DataPropertyName = "Сайт";
            this.сайтDataGridViewTextBoxColumn.HeaderText = "Сайт";
            this.сайтDataGridViewTextBoxColumn.Name = "сайтDataGridViewTextBoxColumn";
            // 
            // StudentProgressForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1273, 673);
            this.Controls.Add(this.bindingNavigator1);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.backButton);
            this.Name = "StudentProgressForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Кафедра";
            this.Load += new System.EventHandler(this.StudentProgressForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.progressBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.mainDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.attendanceBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.subjectBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.teacherBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.prototypeDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.преподавательBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.успеваемостьBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.успеваемостьBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.посещаемостьBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.студентBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебныйПредметBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.студентBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.bindingNavigator1)).EndInit();
            this.bindingNavigator1.ResumeLayout(false);
            this.bindingNavigator1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.преподавательBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебныйПредметBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебнаяГруппаBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.учебнаяГруппаBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.кафедраBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button backButton;
        private System.Windows.Forms.DataGridView dataGridView1;
        private mainDataSet mainDataSet;
        private System.Windows.Forms.BindingSource progressBindingSource;
        private mainDataSetTableAdapters.ProgressTableAdapter progressTableAdapter;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.BindingSource attendanceBindingSource;
        private mainDataSetTableAdapters.AttendanceTableAdapter attendanceTableAdapter;
        private System.Windows.Forms.BindingSource subjectBindingSource;
        private mainDataSetTableAdapters.SubjectTableAdapter subjectTableAdapter;
        private System.Windows.Forms.BindingSource teacherBindingSource;
        private mainDataSetTableAdapters.TeacherTableAdapter teacherTableAdapter;
        private PrototypeDataSet prototypeDataSet;
        private System.Windows.Forms.BindingSource преподавательBindingSource;
        private PrototypeDataSetTableAdapters.ПреподавательTableAdapter преподавательTableAdapter;
        private System.Windows.Forms.BindingSource успеваемостьBindingSource;
        private PrototypeDataSetTableAdapters.УспеваемостьTableAdapter успеваемостьTableAdapter;
        private System.Windows.Forms.BindingSource успеваемостьBindingSource1;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.BindingSource посещаемостьBindingSource;
        private PrototypeDataSetTableAdapters.ПосещаемостьTableAdapter посещаемостьTableAdapter;
        private System.Windows.Forms.BindingSource студентBindingSource;
        private PrototypeDataSetTableAdapters.СтудентTableAdapter студентTableAdapter;
        private System.Windows.Forms.BindingSource учебныйПредметBindingSource;
        private PrototypeDataSetTableAdapters.Учебный_предметTableAdapter учебный_предметTableAdapter;
        private System.Windows.Forms.BindingSource студентBindingSource1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Имя;
        private System.Windows.Forms.DataGridViewTextBoxColumn Отчество;
        private System.Windows.Forms.DataGridViewTextBoxColumn ГруппаID;
        private System.Windows.Forms.DataGridViewTextBoxColumn Телефон;
        private System.Windows.Forms.DataGridViewTextBoxColumn Адрес;
        private System.Windows.Forms.DataGridViewTextBoxColumn iDDataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn максимальныйБаллDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn минимальныйБаллDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn баллСтудентаDataGridViewTextBoxColumn;
        private System.Windows.Forms.BindingNavigator bindingNavigator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem;
        private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
        private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
        private System.Windows.Forms.BindingSource преподавательBindingSource1;
        private System.Windows.Forms.BindingSource учебныйПредметBindingSource1;
        private System.Windows.Forms.BindingSource учебнаяГруппаBindingSource;
        private PrototypeDataSetTableAdapters.Учебная_группаTableAdapter учебная_группаTableAdapter;
        private System.Windows.Forms.BindingSource учебнаяГруппаBindingSource1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.BindingSource кафедраBindingSource;
        private PrototypeDataSetTableAdapters.КафедраTableAdapter кафедраTableAdapter;
        private System.Windows.Forms.DataGridViewTextBoxColumn iDDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn Номер;
        private System.Windows.Forms.DataGridViewTextBoxColumn Название;
        private System.Windows.Forms.DataGridViewTextBoxColumn Факультет;
        private System.Windows.Forms.DataGridViewTextBoxColumn сайтDataGridViewTextBoxColumn;
    }
}